//
//  AppDelegate.h
//  HelloWorld
//
//  Created by Venturelabour on 03/04/18.
//  Copyright © 2018 vlwebtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

