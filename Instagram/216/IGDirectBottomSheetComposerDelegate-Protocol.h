//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectBottomSheetComposerView, IGDirectComposerAttachment, NSString;

@protocol IGDirectBottomSheetComposerDelegate <NSObject>
- (void)composerViewDidInvalidateSize:(IGDirectBottomSheetComposerView *)arg1 needsImmediateLayout:(_Bool)arg2;
- (void)composerView:(IGDirectBottomSheetComposerView *)arg1 didTapSendMessage:(NSString *)arg2 attachment:(IGDirectComposerAttachment *)arg3;
@end
