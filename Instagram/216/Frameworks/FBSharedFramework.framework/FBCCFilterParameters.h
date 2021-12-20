//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCCFilterDescriptor-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FBCCFilterParameters : NSObject <NSCoding, FBCCFilterDescriptor>
{
    NSString *_filterName;
    NSString *_effectID;
    NSDictionary *_config;
}

+ (id)newWithFilterName:(id)arg1 effectID:(id)arg2 config:(id)arg3;
- (void).cxx_destruct;
- (id)effectID;
- (id)config;
- (id)filterName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterName:(id)arg1 effectID:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
