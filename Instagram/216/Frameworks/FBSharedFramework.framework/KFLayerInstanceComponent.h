//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/KFComponent.h>

@interface KFLayerInstanceComponent : KFComponent
{
    struct map<CALayer<KFCALayerProtocol>*__weak, CALayer<KFCALayerProtocol>*__weak, std::less<CALayer<KFCALayerProtocol>*__weak>, std::allocator<std::pair<CALayer<KFCALayerProtocol>*const __weak, CALayer<KFCALayerProtocol>*__weak>>> _instances;
}

+ (unsigned short)componentClassIdentifier;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

