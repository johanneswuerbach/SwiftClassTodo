//
//  Task.h
//  SwiftClassTodo
//
//  Created by Johannes Würbach on 7/12/14.
//  Copyright (c) 2014 Johannes Würbach. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

- (id)initWithName:(NSString *)name;

@property (nonatomic, copy) NSString *name;

@end