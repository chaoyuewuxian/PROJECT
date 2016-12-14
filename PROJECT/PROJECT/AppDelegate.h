//
//  AppDelegate.h
//  PROJECT
//
//  Created by 张瑞超 on 2016/12/14.
//  Copyright © 2016年 张瑞超. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end
