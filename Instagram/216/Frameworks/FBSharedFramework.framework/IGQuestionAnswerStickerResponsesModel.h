//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IGQuestionAnswerStickerResponsesModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _moreAvailable;
    NSString *_questionAnswerStickerPk;
    NSString *_questionType;
    NSArray *_responders;
    long long _unansweredResponseCount;
    NSString *_maxID;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(readonly, nonatomic) long long unansweredResponseCount; // @synthesize unansweredResponseCount=_unansweredResponseCount;
@property(readonly, copy, nonatomic) NSArray *responders; // @synthesize responders=_responders;
@property(readonly, copy, nonatomic) NSString *questionType; // @synthesize questionType=_questionType;
@property(readonly, copy, nonatomic) NSString *questionAnswerStickerPk; // @synthesize questionAnswerStickerPk=_questionAnswerStickerPk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithQuestionAnswerStickerPk:(id)arg1 questionType:(id)arg2 responders:(id)arg3 unansweredResponseCount:(long long)arg4 maxID:(id)arg5 moreAvailable:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;

@end

