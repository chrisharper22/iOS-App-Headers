//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/KFSystem.h>

@protocol KFCASystemDelegate;

@interface KFCASystem : KFSystem
{
    id <KFCASystemDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <KFCASystemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupWithToolbox:(id)arg1 pass:(unsigned long long)arg2;

@end

