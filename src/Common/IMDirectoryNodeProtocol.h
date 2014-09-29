//
//  IMDirectoryNode.h
//  IMFilesManager
//
//  Created by LoveYouForever on 9/29/14.
//  Copyright (c) 2014 i-Move. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMNodeProtocol.h"

@protocol IMDirectoryNode <IMNode>
@property(assign, nonatomic, readonly) NSUInteger numOfSubnodes;

- (id<IMNode>)nodeAtIndex:(NSUInteger)index;
- (void)addNode:(id<IMNode>)node;
- (void)addNode:(id<IMNode>)node atIndex:(NSUInteger)index;
- (void)enumerateObjectsUsingBlock:(void (^)(id obj, NSUInteger idx, BOOL *stop))block;
@end
