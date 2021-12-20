//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadViewModelInstructionsGenerating-Protocol.h"

@class NSString;
@protocol IGDirectInteropFeatureGating;

@interface IGDirectThreadNewMessageSeparatorViewModelInstructionsGenerator : NSObject <IGDirectThreadViewModelInstructionsGenerating>
{
    id <IGDirectInteropFeatureGating> _featureGating;
    NSString *_messageIdToAddNewMessagesIndicatorAfter;
    NSString *_currentUserId;
    _Bool _hasPerformedInitialUpdate;
}

- (void).cxx_destruct;
- (id)generateInstructionsForMessages:(id)arg1 generationInput:(id)arg2;
- (id)initWithFeatureGating:(id)arg1 currentUserId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
