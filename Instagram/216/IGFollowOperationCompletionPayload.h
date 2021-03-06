//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "IGUserSessionPayload-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IGFollowOperationCompletionPayload : FBValueObject <IGUserSessionPayload, NSCopying, NSCoding>
{
    _Bool _didSucceed;
    NSString *_pkOfUser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(readonly, copy, nonatomic) NSString *pkOfUser; // @synthesize pkOfUser=_pkOfUser;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPkOfUser:(id)arg1 didSucceed:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

