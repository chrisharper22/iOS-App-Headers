//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBEVMutation.h>

@class NSArray;

@interface FBEVCompositeMutation : FBEVMutation
{
    NSArray *_underlyingMutations;
}

- (void).cxx_destruct;
@property(readonly) NSArray *underlyingMutations; // @synthesize underlyingMutations=_underlyingMutations;
- (_Bool)applyMutationOntoState:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUnderlyingMutations:(id)arg1;

@end
