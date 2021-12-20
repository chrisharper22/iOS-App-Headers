//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFeedItemCellController.h>

#import "IGFeedItemWYTSurveyCellDelegate-Protocol.h"

@class IGFeedItemTracker, IGFeedItemWYTSurveyCell, IGGenericSurveyQuestionList, IGSimpleAction, NSString;
@protocol IGFeedItemWYTSurveyCellControllerDelegate, IGFeedTheme;

@interface IGFeedItemWYTSurveyCellController : IGFeedItemCellController <IGFeedItemWYTSurveyCellDelegate>
{
    id <IGFeedTheme> _feedTheme;
    IGGenericSurveyQuestionList *_genericQuestionList;
    IGSimpleAction *_simpleAction;
    IGFeedItemTracker *_feedItemTracker;
    IGFeedItemWYTSurveyCell *_surveyCell;
    NSString *_analyticsModule;
    unsigned long long _state;
    id <IGFeedItemWYTSurveyCellControllerDelegate> _delegate;
}

+ (Class)collectionViewCellClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedItemWYTSurveyCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)wytSurveyCellDidDismiss:(id)arg1 atQuestion:(id)arg2;
- (void)wytSurveyCell:(id)arg1 didFinishWithResults:(id)arg2;
- (void)wytSurveyCell:(id)arg1 didReceiveResult:(id)arg2;
- (void)wytSurveyCell:(id)arg1 didNavToQuestion:(id)arg2;
- (void)wytSurveyCellDidStart:(id)arg1;
- (void)_logWithEventSuffix:(id)arg1 extraDict:(id)arg2;
- (void)configureCell:(id)arg1;
- (struct CGSize)sizeForWidth:(double)arg1;
- (id)initWithListSectionContext:(id)arg1 feedItemSectionContext:(id)arg2 feedItemTracker:(id)arg3 feedTheme:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

