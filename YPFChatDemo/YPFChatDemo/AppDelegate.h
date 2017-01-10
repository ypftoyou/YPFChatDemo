//
//  AppDelegate.h
//  YPFChatDemo
//
//  Created by apple on 17/1/10.
//  Copyright © 2017年 ypf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

