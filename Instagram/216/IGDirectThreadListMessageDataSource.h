//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadListMessageQuerying-Protocol.h"

@class IGDirectUIMessageSet, NSString;

@interface IGDirectThreadListMessageDataSource : NSObject <IGDirectThreadListMessageQuerying>
{
    IGDirectUIMessageSet *_messageSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGDirectUIMessageSet *messageSet; // @synthesize messageSet=_messageSet;
- (id)messageForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

