//
//  BannerLib.h
//  BannerLib
//
//  Created by OnRouteDevTeam on 5/31/13.
//  Copyright (c) 2013 OnRouteDevTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
# include <CoreLocation/CoreLocation.h>

@interface BannerLib :NSObject <CLLocationManagerDelegate>
{
    CLLocationManager * locationManager;
    UIButton * BannerButton;
    Boolean isSuccess;
}

-(void) ButtonLink2Server;
-(UIButton*) returnBanner;
-(Boolean) isValidBanner;

@property (nonatomic,retain) CLLocationManager *locationManager;

@end
