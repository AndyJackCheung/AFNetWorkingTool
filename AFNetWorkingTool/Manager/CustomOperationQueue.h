//
//  CustomOperationQueue.h
//  NetworkRequestDemo
//
//  Created by 张明峰 on 2018/6/13.
//  Copyright © 2018年 张明峰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ToolsHeader.h"

@interface CustomOperationQueue : NSOperationQueue

+ (CustomOperationQueue *) sharedCustomOperationQueue;

@end
