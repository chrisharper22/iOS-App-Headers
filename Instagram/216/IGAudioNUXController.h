//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaIndicator;
@protocol IGAudioNUXControllerDelegate;

@interface IGAudioNUXController : NSObject
{
    _Bool _persistent;
    id <IGAudioNUXControllerDelegate> _delegate;
    IGMediaIndicator *_indicator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool persistent; // @synthesize persistent=_persistent;
@property(retain, nonatomic) IGMediaIndicator *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) __weak id <IGAudioNUXControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateIndicatorWithAudioEnabled:(_Bool)arg1;
- (_Bool)isShowingAudioIndicator;
- (void)didTapOnVideo;
- (void)showOneTapIndicatorNUXAnimated:(_Bool)arg1;
- (void)_didPressVolumeButton:(id)arg1;
- (void)_didChangeMuteSwitch:(id)arg1;
- (id)initWithIndicator:(id)arg1;

@end

