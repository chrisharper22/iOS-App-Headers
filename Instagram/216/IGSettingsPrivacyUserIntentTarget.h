//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGSettingsPrivacyUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _shouldSetPrivateByDefault;
    NSString *_qpID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *qpID; // @synthesize qpID=_qpID;
@property(readonly, nonatomic) _Bool shouldSetPrivateByDefault; // @synthesize shouldSetPrivateByDefault=_shouldSetPrivateByDefault;
- (id)initWithShouldSetPrivateByDefault:(_Bool)arg1 qpID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

