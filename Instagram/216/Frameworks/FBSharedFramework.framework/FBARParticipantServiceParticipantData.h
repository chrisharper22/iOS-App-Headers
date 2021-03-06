//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBARParticipantServiceParticipantData : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isActiveInCall;
    _Bool _isActiveInSameEffect;
    NSString *_participantId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isActiveInSameEffect; // @synthesize isActiveInSameEffect=_isActiveInSameEffect;
@property(readonly, nonatomic) _Bool isActiveInCall; // @synthesize isActiveInCall=_isActiveInCall;
@property(readonly, copy, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
- (id)initWithParticipantId:(id)arg1 isActiveInCall:(_Bool)arg2 isActiveInSameEffect:(_Bool)arg3;

@end

