//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMsysViewModelInstructionGenerating-Protocol.h"

@class IGDirectMessageBubbleViewGradientImageGenerator, IGDirectMessageCellContentStringStylesProvider, IGDirectMessageCellThemeProvider, IGDirectMsysMessagingMailbox, IGDirectThreadThemeProvider, MBIVault, NSDataDetector, NSString;
@protocol IGDirectInteropFeatureGating, IGDirectMsysMediaCacheResolving;

@interface IGDirectMsysThreadMessagesViewModelInstructionsGenerator : NSObject <IGDirectMsysViewModelInstructionGenerating>
{
    IGDirectMsysMessagingMailbox *_mailboxProvider;
    id <IGDirectInteropFeatureGating> _featureSetProvider;
    IGDirectMessageCellThemeProvider *_themeProvider;
    IGDirectThreadThemeProvider *_threadThemeProvider;
    MBIVault *_vault;
    IGDirectMessageCellContentStringStylesProvider *_contentStringStylesProvider;
    IGDirectMessageBubbleViewGradientImageGenerator *_gradientImageGenerator;
    NSString *_analyticsModule;
    NSDataDetector *_linkDetector;
    id <IGDirectMsysMediaCacheResolving> _cacheResolver;
}

- (void).cxx_destruct;
- (id)generateInstructionsWithInput:(id)arg1;
- (id)initWithMailboxProvider:(id)arg1 cacheResolver:(id)arg2 vault:(id)arg3 featureGating:(id)arg4 themeProvider:(id)arg5 threadThemeProvider:(id)arg6 contentStringStylesProvider:(id)arg7 gradientImageGenerator:(id)arg8 analyticsModule:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
