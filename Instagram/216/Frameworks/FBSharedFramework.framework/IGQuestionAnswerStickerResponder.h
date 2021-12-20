//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGQuestionAnswerStickerMusicResponse, NSString, NSURL, UIColor;

@interface IGQuestionAnswerStickerResponder : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _hasSharedResponse;
    _Bool _shouldShowQuestionContext;
    _Bool _seen;
    NSString *_pk;
    NSURL *_responderProfilePictureURL;
    NSString *_responderUsername;
    NSString *_responderPk;
    NSString *_response;
    NSString *_originalQuestion;
    NSString *_originalQuestionPk;
    UIColor *_backgroundFillColor;
    IGQuestionAnswerStickerMusicResponse *_musicResponse;
}

+ (id)questionAnswerStickerResponderFromDict:(id)arg1 backgroundFillColor:(id)arg2 originalQuestion:(id)arg3 originalQuestionPk:(id)arg4 userStore:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool seen; // @synthesize seen=_seen;
@property(readonly, copy, nonatomic) IGQuestionAnswerStickerMusicResponse *musicResponse; // @synthesize musicResponse=_musicResponse;
@property(readonly, copy, nonatomic) UIColor *backgroundFillColor; // @synthesize backgroundFillColor=_backgroundFillColor;
@property(readonly, nonatomic) _Bool shouldShowQuestionContext; // @synthesize shouldShowQuestionContext=_shouldShowQuestionContext;
@property(readonly, copy, nonatomic) NSString *originalQuestionPk; // @synthesize originalQuestionPk=_originalQuestionPk;
@property(readonly, copy, nonatomic) NSString *originalQuestion; // @synthesize originalQuestion=_originalQuestion;
@property(readonly, copy, nonatomic) NSString *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *responderPk; // @synthesize responderPk=_responderPk;
@property(readonly, copy, nonatomic) NSString *responderUsername; // @synthesize responderUsername=_responderUsername;
@property(readonly, copy, nonatomic) NSURL *responderProfilePictureURL; // @synthesize responderProfilePictureURL=_responderProfilePictureURL;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) _Bool hasSharedResponse; // @synthesize hasSharedResponse=_hasSharedResponse;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithHasSharedResponse:(_Bool)arg1 pk:(id)arg2 responderProfilePictureURL:(id)arg3 responderUsername:(id)arg4 responderPk:(id)arg5 response:(id)arg6 originalQuestion:(id)arg7 originalQuestionPk:(id)arg8 shouldShowQuestionContext:(_Bool)arg9 backgroundFillColor:(id)arg10 musicResponse:(id)arg11 seen:(_Bool)arg12;
- (id)initWithCoder:(id)arg1;

@end
