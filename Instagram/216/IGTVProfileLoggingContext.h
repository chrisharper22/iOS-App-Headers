//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGTVThumbnailSectionLoggingContextType-Protocol.h"

@class IGTVDestinationEntryPoint, IGUserSession, NSDictionary, NSString;

@interface IGTVProfileLoggingContext : NSObject <IGTVThumbnailSectionLoggingContextType>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    NSString *_attributingMediaPK;
    NSDictionary *_followLoggingExtras;
    NSString *_destinationSessionID;
    IGTVDestinationEntryPoint *_entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTVDestinationEntryPoint *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, copy, nonatomic) NSString *destinationSessionID; // @synthesize destinationSessionID=_destinationSessionID;
@property(readonly, copy, nonatomic) NSDictionary *followLoggingExtras; // @synthesize followLoggingExtras=_followLoggingExtras;
@property(readonly, copy, nonatomic) NSString *attributingMediaPK; // @synthesize attributingMediaPK=_attributingMediaPK;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (id)_loggingExtras;
- (id)_eventWithName:(id)arg1 media:(id)arg2;
- (id)_eventWithName:(id)arg1;
- (id)impressionLoggingExtrasForBroadcast:(id)arg1 availableBroadcastCount:(long long)arg2 component:(long long)arg3 sourceChannelType:(id)arg4 videoPosition:(id)arg5;
- (void)logVideoTapWithBroadcast:(id)arg1 availableBroadcastCount:(long long)arg2 component:(long long)arg3 sourceChannelType:(id)arg4 videoPosition:(id)arg5;
- (id)impressionLoggingExtrasForMedia:(id)arg1 component:(long long)arg2 sourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)logVideoTapWithMedia:(id)arg1 fromComponent:(long long)arg2 withSourceChannelType:(id)arg3 videoPosition:(id)arg4;
- (void)logProfileTabExitWithChannelPK:(id)arg1;
- (void)logProfileTabEntryWithChannelPK:(id)arg1;
- (id)initWithUserSession:(id)arg1 attributingMediaPK:(id)arg2 followLoggingExtras:(id)arg3 destinationSessionID:(id)arg4 entryPoint:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

