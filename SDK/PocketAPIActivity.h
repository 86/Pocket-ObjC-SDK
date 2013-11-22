//
//  PocketAPIActivity.h
//  ThinkSocial
//
//  Created by David Beck on 12/1/12.
//  Copyright (c) 2012 ThinkUltimate. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PocketActivityDelegate

- (void)pocketDidFinishedSave:(BOOL)result;

@end

@interface PocketAPIActivity : UIActivity


@property (nonatomic, assign) id delegate;


@end
