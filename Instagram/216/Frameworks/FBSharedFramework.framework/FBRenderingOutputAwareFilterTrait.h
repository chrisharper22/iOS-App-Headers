//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBFilterTrait-Protocol.h>

@class NSString;

@interface FBRenderingOutputAwareFilterTrait : NSObject <FBFilterTrait>
{
    unsigned long long _supportedRenderingOutputOptions;
}

+ (id)newWithSupportedRenderingOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long supportedRenderingOutputOptions; // @synthesize supportedRenderingOutputOptions=_supportedRenderingOutputOptions;
- (id)initWithSupportedRenderingOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
