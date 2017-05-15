//
//  AppDelegate.h
//  MyPushDemo
//
//  Created by ZhongGuanWangKe on 17/4/27.
//  Copyright © 2017年 ZhongGuanWangKe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

