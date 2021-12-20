//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAdPlatformEventCenterType-Protocol.h>

@class IGAdInsertionDebuggerViewModel, IGAdPlatformLogger, IGAdPlatformStatesCenter, IGAdPlatformToolbox, NSString;
@protocol IGAdPlatformStatesSnapshot;

@interface IGAdPlatformEventCenter : NSObject <IGAdPlatformEventCenterType>
{
    IGAdPlatformLogger *_adPlatformLogger;
    NSString *_fetchContainerModule;
    IGAdPlatformStatesCenter *_statesCenter;
    unsigned long long _adInsertionSurface;
    IGAdPlatformToolbox *_adPlatformToolbox;
    IGAdInsertionDebuggerViewModel *_debugViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAdInsertionDebuggerViewModel *debugViewModel; // @synthesize debugViewModel=_debugViewModel;
- (void)postEvent:(id)arg1;
@property(readonly, nonatomic) id <IGAdPlatformStatesSnapshot> adPlatformStatesSnapshot;
- (id)initWithAdPlatformToolbox:(id)arg1 surfaceEntryPoint:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

