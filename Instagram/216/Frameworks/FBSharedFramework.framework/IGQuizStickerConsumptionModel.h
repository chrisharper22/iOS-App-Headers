//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface IGQuizStickerConsumptionModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _viewerCanAnswer;
    _Bool _isSharedResult;
    NSString *_pk;
    NSString *_question;
    NSArray *_options;
    NSNumber *_correctAnswerIndex;
    NSString *_textColor;
    NSString *_startBackgroundColor;
    NSString *_endBackgroundColor;
    NSNumber *_viewerAnswer;
    NSString *_tapStateId;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *tapStateId; // @synthesize tapStateId=_tapStateId;
@property(readonly, nonatomic) _Bool isSharedResult; // @synthesize isSharedResult=_isSharedResult;
@property(readonly, copy, nonatomic) NSNumber *viewerAnswer; // @synthesize viewerAnswer=_viewerAnswer;
@property(readonly, nonatomic) _Bool viewerCanAnswer; // @synthesize viewerCanAnswer=_viewerCanAnswer;
@property(readonly, copy, nonatomic) NSString *endBackgroundColor; // @synthesize endBackgroundColor=_endBackgroundColor;
@property(readonly, copy, nonatomic) NSString *startBackgroundColor; // @synthesize startBackgroundColor=_startBackgroundColor;
@property(readonly, copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSNumber *correctAnswerIndex; // @synthesize correctAnswerIndex=_correctAnswerIndex;
@property(readonly, copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 question:(id)arg2 options:(id)arg3 correctAnswerIndex:(id)arg4 textColor:(id)arg5 startBackgroundColor:(id)arg6 endBackgroundColor:(id)arg7 viewerCanAnswer:(_Bool)arg8 viewerAnswer:(id)arg9 isSharedResult:(_Bool)arg10 tapStateId:(id)arg11;
- (id)initWithCoder:(id)arg1;

@end

