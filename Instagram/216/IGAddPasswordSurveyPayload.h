//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionPayload-Protocol.h"

@class NSString;

@interface IGAddPasswordSurveyPayload : NSObject <IGUserSessionPayload>
{
    NSString *_deviceID;
    NSString *_waterfallID;
}

- (void).cxx_destruct;
- (id)waterfallID;
- (id)deviceID;
- (id)initWithDeviceID:(id)arg1 waterfallID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

