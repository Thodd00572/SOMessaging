//
//  SOMessagingViewController.h
//  SOSimpleChatDemo
//
//  Created by Artur Mkrtchyan on 4/23/14.
//  Copyright (c) 2014 SocialOjbects Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SOMessageType.h"
#import "SOMessagingDataSource.h"

@interface SOMessagingViewController : UIViewController <SOMessagingDataSource>

#pragma mark - Properties
@property (strong, nonatomic) UITableView *tableView;

@end
