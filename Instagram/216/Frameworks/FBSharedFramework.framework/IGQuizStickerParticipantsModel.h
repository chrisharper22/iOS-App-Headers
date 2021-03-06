//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IGQuizStickerParticipantsModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _moreAvailable;
    NSString *_quizStickerPk;
    NSArray *_participants;
    NSString *_maxID;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) NSString *quizStickerPk; // @synthesize quizStickerPk=_quizStickerPk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithQuizStickerPk:(id)arg1 participants:(id)arg2 maxID:(id)arg3 moreAvailable:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end

