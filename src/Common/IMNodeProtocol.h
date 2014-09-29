//
//  IMNode.h
//  IMFilesManager
//
//  Created by LoveYouForever on 9/29/14.
//  Copyright (c) 2014 i-Move. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMNodeRenameProtocol.h"
#import "IMNodeCopyProtocol.h"
#import "IMNodeDeleteProtocol.h"
#import "IMNodeMoveProtocol.h"

@protocol IMNode <IMNodeRename, IMNodeCopy, IMNodeDelete, IMNodeMove>
@property(strong, nonatomic) NSString* identifier;
@property(strong, nonatomic) NSString* parentIdentifier;
@property(copy,   nonatomic) NSString* name;
@end

