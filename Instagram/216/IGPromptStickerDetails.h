//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGPromptStickerAnonymousPromptExplanation, IGPromptStickerOriginalPrompt, NSArray, NSNumber, NSString;

@interface IGPromptStickerDetails : FBValueObject <NSCopying, NSCoding>
{
    IGPromptStickerOriginalPrompt *_originalPrompt;
    NSNumber *_participantCount;
    NSArray *_participants;
    NSString *_disclaimerText;
    IGPromptStickerAnonymousPromptExplanation *_anonymousPromptExplanationInfo;
    long long _notificationSetting;
    long long _authorAttributionSetting;
    long long _disablementState;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long disablementState; // @synthesize disablementState=_disablementState;
@property(readonly, nonatomic) long long authorAttributionSetting; // @synthesize authorAttributionSetting=_authorAttributionSetting;
@property(readonly, nonatomic) long long notificationSetting; // @synthesize notificationSetting=_notificationSetting;
@property(readonly, copy, nonatomic) IGPromptStickerAnonymousPromptExplanation *anonymousPromptExplanationInfo; // @synthesize anonymousPromptExplanationInfo=_anonymousPromptExplanationInfo;
@property(readonly, copy, nonatomic) NSString *disclaimerText; // @synthesize disclaimerText=_disclaimerText;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) NSNumber *participantCount; // @synthesize participantCount=_participantCount;
@property(readonly, copy, nonatomic) IGPromptStickerOriginalPrompt *originalPrompt; // @synthesize originalPrompt=_originalPrompt;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOriginalPrompt:(id)arg1 participantCount:(id)arg2 participants:(id)arg3 disclaimerText:(id)arg4 anonymousPromptExplanationInfo:(id)arg5 notificationSetting:(long long)arg6 authorAttributionSetting:(long long)arg7 disablementState:(long long)arg8;
- (id)initWithCoder:(id)arg1;

@end

