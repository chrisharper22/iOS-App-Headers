//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGGenericSurveyAnonymousFeedback, NSArray;

@interface IGGenericSurveyAnswerListCollectionDataSource : NSObject <IGListDiffable>
{
    NSArray *_contexts;
    IGGenericSurveyAnonymousFeedback *_anonymousFeedback;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGenericSurveyAnonymousFeedback *anonymousFeedback; // @synthesize anonymousFeedback=_anonymousFeedback;
@property(readonly, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithQuestionListItem:(id)arg1;

@end

