//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KFInteractivityListenerAnnouncer, UITapGestureRecognizer, UIView;

@interface KFInputManager : NSObject
{
    KFInteractivityListenerAnnouncer *_announcer;
    UIView *_tapView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _tapGestureSubscribeCount;
}

- (void).cxx_destruct;
- (void)_announceTapGesture;
- (void)_handleTapGesture:(id)arg1;
- (_Bool)_tapGestureRecognizerIsConfiguredForNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (void)_removeTapGestureRecognizer;
- (void)_createTapGestureRecognizerWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (void)endProducingTapInputWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (void)beginProducingTapInputWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2;
- (id)initWithAnnouncer:(id)arg1 tapView:(id)arg2;

@end

