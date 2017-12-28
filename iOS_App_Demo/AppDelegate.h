//
//  AppDelegate.h
//  iOS_App_Demo
//
//  Created by Chengzhi Jia on 12/27/17.
//  Copyright © 2017 Chengzhi Jia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

