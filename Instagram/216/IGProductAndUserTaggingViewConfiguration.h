//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGTaggingViewConfiguration-Protocol.h"

@class IGProductTaggingViewConfiguration, IGUserSession, IGUserTaggingViewConfiguration, NSString;
@protocol IGTaggingViewConfiguration;

@interface IGProductAndUserTaggingViewConfiguration : NSObject <IGTaggingViewConfiguration>
{
    IGUserSession *_userSession;
    id <IGTaggingViewConfiguration> _currentlyActiveTaggingViewConfiguration;
    IGProductTaggingViewConfiguration *_productTaggingViewConfiguration;
    IGUserTaggingViewConfiguration *_userTaggingViewConfiguration;
    _Bool _isTaggingModeDifferentFromExistingTagsType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTaggingModeDifferentFromExistingTagsType; // @synthesize isTaggingModeDifferentFromExistingTagsType=_isTaggingModeDifferentFromExistingTagsType;
@property(readonly, nonatomic) IGUserTaggingViewConfiguration *userTaggingViewConfiguration; // @synthesize userTaggingViewConfiguration=_userTaggingViewConfiguration;
@property(readonly, nonatomic) IGProductTaggingViewConfiguration *productTaggingViewConfiguration; // @synthesize productTaggingViewConfiguration=_productTaggingViewConfiguration;
- (id)indicatorEditViewText;
- (_Bool)expandedIndicatorInEditViewEnabled;
- (long long)taggingLearnMoreType;
- (long long)currentPostItemTagCountLimit;
- (long long)feedItemTagCountLimit;
- (id)viewModelForError;
- (id)viewModelForNoResults;
- (id)viewModelsForResults:(id)arg1;
- (id)searchDataSourceWithUserSession:(id)arg1 delegate:(id)arg2;
- (id)pendingTagViewAtPosition:(struct CGPoint)arg1;
- (id)tagViewWithTag:(id)arg1;
- (id)analyticsModuleName;
- (id)searchBarPlaceholder;
- (id)removeAllSuggestionsText;
- (id)postTagLimitReachedLabelText;
- (id)feedTagLimitReachedLabelText;
- (id)addMoreTagsLabelText;
- (id)emptyStateView;
- (id)addFirstTagLabelText;
- (unsigned long long)mediaIndicatorIconType;
- (id)taggingViewTitle;
- (long long)taggingType;
- (long long)taggingMode;
- (id)_taggingViewConfigurationWithTaggingMode:(long long)arg1;
- (void)setCurrentTaggingMode:(long long)arg1 isTaggingModeDifferentFromExistingTagsType:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 productTaggingViewConfiguration:(id)arg2 userTaggingViewConfiguration:(id)arg3 currentTaggingMode:(long long)arg4 isTaggingModeDifferentFromExistingTagType:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
