//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMsysViewModelInstructionGenerating-Protocol.h"

@class IGDirectMessageCellContentStringStylesProvider, IGDirectMessageCellTheme, IGDirectMessageCellThemeProvider, IGDirectThreadTheme, IGDirectThreadThemeProvider, NSArray, NSString;
@protocol IGDirectInteropFeatureGating;

@interface IGDirectMsysTypingIndicatorViewModelInstructionsGenerator : NSObject <IGDirectMsysViewModelInstructionGenerating>
{
    id <IGDirectInteropFeatureGating> _featureGating;
    IGDirectThreadThemeProvider *_threadThemeProvider;
    IGDirectMessageCellContentStringStylesProvider *_contentStringStylesProvider;
    IGDirectMessageCellThemeProvider *_themeProvider;
    NSString *_analyticsModule;
    IGDirectThreadTheme *_threadTheme;
    IGDirectMessageCellTheme *_actionTheme;
    NSArray *_currentProfileImages;
}

- (void).cxx_destruct;
- (id)_getCellLayoutSpecWithBubbleGroupingStyle:(unsigned long long)arg1 generationInput:(id)arg2;
- (id)generateInstructionsWithInput:(id)arg1;
- (id)initWithFeatureGating:(id)arg1 themeProvider:(id)arg2 threadThemeProvider:(id)arg3 contentStringStylesProvider:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

