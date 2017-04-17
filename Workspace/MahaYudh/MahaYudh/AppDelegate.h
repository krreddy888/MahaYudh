//
//  AppDelegate.h
//  MahaYudh
//
//  Created by Roopesh Reddy on 4/17/17.
//  Copyright © 2017 Roopesh Reddy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

