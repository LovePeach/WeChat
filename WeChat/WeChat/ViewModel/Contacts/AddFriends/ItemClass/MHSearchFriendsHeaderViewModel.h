//
//  MHSearchFriendsHeaderViewModel.h
//  WeChat
//
//  Created by senba on 2017/9/24.
//  Copyright © 2017年 CoderMikeHe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MHSearchFriendsHeaderViewModel : NSObject

/// Current login User
@property (nonatomic, readonly, strong) id user;

/// searchCmd
@property (nonatomic, readwrite, strong) RACCommand *searchCommand;

/// init
- (instancetype)initWithUser:(id)user;


@end
