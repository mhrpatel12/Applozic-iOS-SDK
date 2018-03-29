//
//  AppDelegate.h
//  applozicdemo
//
//  Created by Devashish on 07/10/15.
//  Copyright © 2015 applozic Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Applozic/ALAppLocalNotifications.h"



@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
@property(nonatomic,strong) UIActivityIndicatorView *activityView;
@property(nonatomic,strong) ALChatLauncher * chatLauncher;
@end

