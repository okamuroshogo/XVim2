//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTToolbarViewController.h>

@class DVTObservingToken, DVTRolloverTrackingButton;

@interface IDEInspectorToolbarViewController : DVTToolbarViewController
{
    DVTRolloverTrackingButton *_button;
    DVTObservingToken *_inspectorVisibilityObservationToken;
}

- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)primitiveInvalidate;
- (void)startObservingInspectorVisibility;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;

@end
