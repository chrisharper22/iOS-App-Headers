//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStoryTrayDataSource-Protocol.h"
#import "IGStoryTrayLoggingContextDataSource-Protocol.h"

@class IGSpinnerLabelViewModel, IGUserSession, NSArray, NSString;

@interface IGSettingsAdActivityStoryTrayDataSource : NSObject <IGStoryTrayDataSource, IGStoryTrayLoggingContextDataSource>
{
    IGUserSession *_userSession;
    IGSpinnerLabelViewModel *_spinner;
    NSArray *_reels;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *reels; // @synthesize reels=_reels;
- (id)storyTrayViewModelsForLoggingContext;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)viewModelForReel:(id)arg1;
- (id)viewModelForLiveBroadcast:(id)arg1;
- (id)allItemsForTray;
@property(readonly, nonatomic) _Bool trayShouldScrollToEndOnDismiss;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)updateWithReels:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)initWithUserSession:(id)arg1 reels:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

