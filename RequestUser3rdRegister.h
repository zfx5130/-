//
//  RequestUser3rdRegister.h
//  niaobushi
//
//  Created by admin on 16/8/30.
//  Copyright © 2016年 yangkun. All rights reserved.
//

#import "AMKRequest.h"

@interface RequestUser3rdRegister : AMKRequest

@property (nonatomic, assign) NSInteger loginType;
@property (nonatomic, copy) NSString *uniqueId;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *headUrl;
@property (nonatomic, copy) NSString *email;

@end
