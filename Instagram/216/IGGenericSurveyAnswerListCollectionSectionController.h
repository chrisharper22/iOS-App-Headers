//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGGenericSurveyAnswerListSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGGenericSurveyAlertAssistant, IGGenericSurveyAnswerListCollectionDataSource, IGGenericSurveyTapCTAContext, IGListAdapter, NSString, UICollectionView;
@protocol IGGenericSurveyAnswerListCollectionSectionControllerDelegate;

@interface IGGenericSurveyAnswerListCollectionSectionController : IGListSectionController <IGGenericSurveyAnswerListSectionControllerDelegate, IGListAdapterDataSource>
{
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGGenericSurveyAnswerListCollectionDataSource *_dataSource;
    id <IGGenericSurveyAnswerListCollectionSectionControllerDelegate> _delegate;
    IGGenericSurveyAlertAssistant *_alertAssistant;
    IGGenericSurveyTapCTAContext *_tapCTAContext;
    unsigned long long _surveyType;
}

- (void).cxx_destruct;
- (_Bool)genericSurveyAnswerListSectionControllerIsSubmitButtonEnabled:(id)arg1;
- (void)genericSurveyAnswerListSectionController:(id)arg1 didSubmitWithAnswers:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)scrollToAnswerListWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_setupCollectionViewAndAdapter;
- (id)initWithDelegate:(id)arg1 alertAssistant:(id)arg2 surveyType:(unsigned long long)arg3 tapCTAContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

