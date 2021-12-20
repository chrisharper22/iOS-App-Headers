//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadViewModelInstructionsGenerating-Protocol.h"

@class IGDirectMessageCellContentStringStylesProvider, IGDirectMessageCellThemeProvider, NSString;
@protocol IGDirectInteropFeatureGating;

@interface IGDirectThreadLoadingViewModelInstructionsGenerator : NSObject <IGDirectThreadViewModelInstructionsGenerating>
{
    IGDirectMessageCellThemeProvider *_themeProvider;
    IGDirectMessageCellContentStringStylesProvider *_contentStringStylesProvider;
    id <IGDirectInteropFeatureGating> _featureSetProvider;
}

- (void).cxx_destruct;
- (id)generateInstructionsForMessages:(id)arg1 generationInput:(id)arg2;
- (id)initWithThemeProvider:(id)arg1 contentStringStylesProvider:(id)arg2 featureSetProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
