//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKBloksTextInputFormatterProtocol-Protocol.h"

@class NSString;

@interface IGBloksTextInputNumericalMask : NSObject <BKBloksTextInputFormatterProtocol>
{
    NSString *_hashtagString;
}

- (void).cxx_destruct;
- (id)formatPlaceholderText:(id)arg1;
- (id)formatText:(id)arg1;
- (id)initWithHashtagString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
