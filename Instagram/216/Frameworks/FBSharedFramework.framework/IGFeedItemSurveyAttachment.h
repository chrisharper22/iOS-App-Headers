//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGGenericSurveyQuestionList, IGSimpleAction;

@interface IGFeedItemSurveyAttachment : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGSimpleAction *_inlineSurvey_simpleAction;
    IGGenericSurveyQuestionList *_inlineSurvey_questionList;
}

+ (id)inlineSurveyWithSimpleAction:(id)arg1 questionList:(id)arg2;
- (void).cxx_destruct;
- (void)matchInlineSurvey:(CDUnknownBlockType)arg1;
- (_Bool)matchBooleanInlineSurvey:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

