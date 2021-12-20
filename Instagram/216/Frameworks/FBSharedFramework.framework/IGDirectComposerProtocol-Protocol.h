//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString, UIButton;
@protocol IGDirectComposerButtonDelegate, IGDirectComposerMediaPasteDelegate, IGDirectComposerSizingDelegate, IGDirectComposerTextListener;

@protocol IGDirectComposerProtocol <NSObject>
@property(readonly, nonatomic) UIButton *cameraButton;
@property(nonatomic) __weak id <IGDirectComposerMediaPasteDelegate> mediaPasteDelegate;
@property(nonatomic) __weak id <IGDirectComposerSizingDelegate> sizingDelegate;
@property(nonatomic) __weak id <IGDirectComposerButtonDelegate> buttonDelegate;
- (void)removeTextListener:(id <IGDirectComposerTextListener>)arg1;
- (void)addTextListener:(id <IGDirectComposerTextListener>)arg1;
- (NSString *)text;
- (void)updateTextInRange:(struct _NSRange)arg1 replacementText:(NSString *)arg2;
- (void)updateText:(NSString *)arg1;
- (void)restoreDraftMessage:(NSString *)arg1;
@end
