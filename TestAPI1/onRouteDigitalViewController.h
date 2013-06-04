//
//  onRouteDigitalViewController.h
//  TestAPI1
//
//  Created by OnRouteDevTeam on 5/31/13.
//  Copyright (c) 2013 OnRouteDevTeam. All rights reserved.
//

#import <UIKit/UIKit.h>
# import "BannerLib.h"


/*
 Source Code Dependencies:-
 SBJSON Package(25 Files)
 
 Objective C Frameworks
 
 CoreLocation.Framework
 MobileCoreServicesframework
 libz.1.2.5.framework
 SystemConfiguration.framework
 UiKit.framework
 CoreGraphics.framework
 CFNetwork.framework
 
 
 Already Compiled within Source Code:-
 ASI Library http://allseeing-i.com/ASIHTTPRequest/
 
 Script.sh compiles a static library
 
 in the build folder within the project, we have a combined .a file
 which contains compiled code for both i386 as well as iPhone exec.
 
 How to Use the API:-
 
 create an object pointer of class BannerLib
 Allocate the Object and Initialize the Object
 
 To add a banner on any existing application:-
 
 1. LinkBanner2Server
 
 2. On a Separate thread , pool the BannerLib Object to check if Banner is Initialized
 
 3. Once banner is Initialized, just Add the UIButton to the View Hierarchy
 
 
 */


@interface onRouteDigitalViewController : UIViewController
{
BannerLib *x;
}

@end
