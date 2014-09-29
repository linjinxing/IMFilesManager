//
//  IMDirectory.m
//  IMFilesManager
//
//  Created by LoveYouForever on 9/29/14.
//  Copyright (c) 2014 i-Move. All rights reserved.
//

#import "IMDirectory.h"

@interface IMDirectory()
@property(strong, nonatomic) NSMutableArray* nodes;
@end

@implementation IMDirectory

- (id<IMNode>)nodeAtIndex:(NSUInteger)index
{
    return self.nodes[index];
}

- (void)addNode:(id<IMNode>)node
{
    [self.nodes addObject:node];
}

- (void)addNode:(id<IMNode>)node atIndex:(NSUInteger)index
{
    [self.nodes insertObject:node atIndex:index];
}

- (void)enumerateObjectsUsingBlock:(void (^)(id obj, NSUInteger idx, BOOL *stop))block
{
    [self.nodes enumerateObjectsUsingBlock:block];
}
@end



