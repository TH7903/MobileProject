//
//  MPDataBaseConnectionProtocol.h
//  MobileProject
//
//  Created by wujunyang on 2017/3/10.
//  Copyright © 2017年 wujunyang. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MPDataBaseConnectionProtocol <NSObject>

@optional

-(void)connect;

-(void)closeConnect;

@end
