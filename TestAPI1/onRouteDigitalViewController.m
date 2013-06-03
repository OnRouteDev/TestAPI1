//
//  onRouteDigitalViewController.m
//  TestAPI1
//
//  Created by OnRouteDevTeam on 5/31/13.
//  Copyright (c) 2013 OnRouteDevTeam. All rights reserved.
//

#import "onRouteDigitalViewController.h"

@interface onRouteDigitalViewController ()

@end

@implementation onRouteDigitalViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    x=[[BannerLib alloc]init];
   
    [x ButtonLink2Server];
    
    [NSThread detachNewThreadSelector:@selector(initBanner) toTarget:self  withObject:nil];
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void) initBanner
{
    while (![x isValidBanner])
    {
        ;
    }
    [NSThread sleepForTimeInterval:0.2];
    [self.view addSubview:[x returnBanner]];
}


@end
