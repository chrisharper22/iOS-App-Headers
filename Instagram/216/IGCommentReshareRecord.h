//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGUser, NSArray, NSString;

@interface IGCommentReshareRecord : NSObject <IGListDiffable>
{
    NSArray *_usernames;
    NSString *_threadID;
    IGUser *_sender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUser *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) NSArray *usernames; // @synthesize usernames=_usernames;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUsernames:(id)arg1 sender:(id)arg2 threadID:(id)arg3;

@end
