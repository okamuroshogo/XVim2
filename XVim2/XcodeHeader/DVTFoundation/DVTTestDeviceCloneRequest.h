//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPromise;
@protocol DVTTestDevice;

@interface DVTTestDeviceCloneRequest : NSObject
{
    id <DVTTestDevice> _deviceToClone;
    DVTPromise *_promise;
}

- (void).cxx_destruct;
@property(readonly) DVTPromise *promise; // @synthesize promise=_promise;
@property(readonly) id <DVTTestDevice> deviceToClone; // @synthesize deviceToClone=_deviceToClone;
- (id)initWithDeviceToClone:(id)arg1 promise:(id)arg2;

@end
